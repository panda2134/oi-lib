#include "oi-lib.h"
#include <string>
bool OIlib::isprime(int n)
{
    if(n==0||n==1)
        return false;
    for(int i=2;i*i<=n;i++)
        if(!(n%i))
            return false;
    return true;
}
bool OIlib::odd(int n)
{
	return n%2; 
}
bool OIlib::even(int n)
{
	return !(n%2); 
}
void OIlib::swapnum(int & a,int & b)
{
	a+=b;
	b=a-b;
	a-=b;
}
void OIlib::swapnum(double & a,double & b)
{
	double c;
	c=a;
	a=b;
	b=c;
}
int OIlib::gcd(int a,int b)
{
	int r;
	if(a<b)
		swapnum(a,b);
	r=b;
	while(r)
	{
		r=a%b;
		a=b;
	    b=r;
	}
	return a;
}
Node* OIlib::Node::getNext(){
	return this->next;
}
void OIlib::Node::setNext(Node* n){
	this->next=n;
}
void OIlib::Node::setValue(string v){
	this->val=v;
}
string OIlib::Node::getValue(){
	return val;
}
void OIlib::Node::ins(string value){
	Node *n=this->getNext();
	Node *toInsert=new Node();
	this->next=toInsert;
	this->next->next=n;
	this->next->val=value;
}
OIlib::NodeList::NodeList(){
	head=new Node();
	head->setNext(NULL);
	cur=head;
}
OIlib::NodeList::~NodeList(){
	Node *f,*n;
	f=this->head;
	while(f->getNext()!=NULL){
		n=f->getNext();
		delete f;
		f=n;
	}
}
Node* OIlib::NodeList::getHead(){
	return this->head;
}
Node* OIlib::NodeList::getCur(){
	return this->cur;
}
void OIlib::NodeList::goNext(){
	this->cur=this->cur->getNext();
}
void OIlib::NodeList::ins(string value){
	cur->ins(value);
}
void OIlib::NodeList::rewind(){
	cur=head;
}
