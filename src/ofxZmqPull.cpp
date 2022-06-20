#include "ofxZmqPull.h"

ofxZmqPull::ofxZmqPull() : ofxZmqSocket(ZMQ_PULL)
{
}

void ofxZmqPull::bind(string addr)
{
	ofxZmqSocket::bind(addr);
}

void ofxZmqPull::unbind(string addr)
{
	ofxZmqSocket::unbind(addr);
}

void ofxZmqPull::connect(string addr)
{
	ofxZmqSocket::connect(addr);
}

void ofxZmqPull::disconnect(string addr)
{
	ofxZmqSocket::disconnect(addr);
}

bool ofxZmqPull::receive(string &data)
{
	return ofxZmqSocket::receive(data);
}

bool ofxZmqPull::receive(ofBuffer &data)
{
	return ofxZmqSocket::receive(data);
}

bool ofxZmqPull::hasWaitingMessage(long timeout_millis)
{
	return ofxZmqSocket::hasWaitingMessage(timeout_millis);
}

bool ofxZmqPull::getNextMessage(string &data)
{
	return ofxZmqSocket::getNextMessage(data);
}

bool ofxZmqPull::getNextMessage(ofBuffer &data)
{
	return ofxZmqSocket::getNextMessage(data);
}
