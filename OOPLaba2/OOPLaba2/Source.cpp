#include <iostream>
#include <vector>
#include <algorithm>
#include "math.h"

class Node {
	public:
		Node() { k = 1; power = 0; };
		Node(double k, int power) { this->k = k; this->power = power; }
		int getPower() { return power; }
		double getK() { return k; }
		void setK(double k) { this->k = k; }
	private:
		double k;
		int power;
};

class Poly {
	public:
		Poly() {};
		Poly(std::vector<Node> data) { this->data = data; }
		Poly(Node node) { this->data.push_back(node); }
		std::vector<Node> getData() { return data; }
		void Add(Node node) {
			bool flag = false;
			for (auto& i : this->data) {
				if (node.getPower() == i.getPower()) {
					flag = true;
					i.setK(i.getK() + node.getK());
				}
			}
			if (!flag)
				this->data.push_back(node);
		}
		//void Substract(Node node) { data.erase(std::remove(data.begin(), data.end(), node), data.end()); }
		int Power() {
			std::vector<int> powers;
			for (auto i : this->data) powers.push_back(i.getPower());
			if (powers.size() > 0) {
				int max = powers[0];
				for (int i = 1; i < powers.size(); i++)
					max = max < powers[i] ? powers[i] : max;
				return max;
			}
			return 0;
		}
		double calculate(double x) {
			double total = 0;
			for (auto i : this->data)
				total += i.getK() * pow(x, i.getPower());
			return total;
		}
		Poly operator+(Poly x) {
			Poly p;
			for (auto& i : this->data)
				p.Add(i);
			for (auto& i : x.getData())
				p.Add(i);

			return p;
		}
		Poly& operator=(Poly& x) {
			if (&x == this) return *this;
			this->data = x.data;
			return *this;
		}
		friend std::ostream& operator<<(std::ostream& os, Poly& p);

	private:
		std::vector<Node> data;
};

std::ostream& operator<<(std::ostream& os, Poly& p) {
	for (int i = 0; i < p.data.size(); i++)
		if (i != p.data.size() - 1)
			if (p.data[i].getPower() == 0)
				os << p.data[i].getK() << " + ";
			else
				os << p.data[i].getK() << "x^" << p.data[i].getPower() << " + ";
		else
			if (p.data[i].getPower() == 0)
				os << p.data[i].getK() << std::endl;
			else
				os << p.data[i].getK() << "x^" << p.data[i].getPower() << std::endl;
		//os << p.data[i].getK() << (p.data[i].getPower() == 0 ? ("x^" << p.data[i].getPower()) : "") << (i == p.data.size() - 1 ? "\n" : " + ");
	return os;
}

int main() {
	Poly p(std::vector<Node>{Node(2, 3), Node(17, 0)});
	Poly n(std::vector<Node>{Node(5, 3), Node(3, 0)});
	//std::cout << p.Power();
	//std::cout << " " << p.calculate(5);
	std::cout << p << std::endl;
	std::cout << n << std::endl;
	Poly s = p + n;
	std::cout << s << std::endl;
	s = p;
	//std::cout << " " << s.calculate(2);
	//std::cout << " " << s.calculate(2);

	std::cout << s;
	system("pause");
	return 0;
}