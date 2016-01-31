#ifndef _OIlib_H
#define _OIlib_H
namespace OIlib
{
	void swapnum(int &,int &);
	void swapnum(double &,double &);
	bool isprime(int);
	bool odd(int);
	bool even(int);
	int gcd(int,int);
	class Node{
		private:
			Node *next;
			int id;
			string val;
		public:
			Node* getNext();
			void setNext(Node*);
			void setValue(string v);
			string getValue();
			void ins(string value);
			void del();
};
	class NodeList{
		private:
			Node *head,*cur;
		public:
			NodeList();
			~NodeList();
			Node* getHead();
			Node* getCur();
			void goNext();
			void ins(string value);
			void rewind();
};
}
#endif
