#include "ofxZmqPush.h"

ofxZmqPush::ofxZmqPush() : ofxZmqSocket(ZMQ_PUSH)
{
}

void ofxZmqPush::bind(string addr)
{
	ofxZmqSocket::bind(addr);
}

void ofxZmqPush::unbind(string addr)
{
	ofxZmqSocket::unbind(addr);
}

void ofxZmqPush::connect(string addr)
{
	ofxZmqSocket::connect(addr);
}

void ofxZmqPush::disconnect(string addr)
{
	ofxZmqSocket::disconnect(addr);
}

bool ofxZmqPush::send(const void *data, size_t len, bool nonblocking, bool more)
{
	return ofxZmqSocket::send(data, len, nonblocking, more);
}

bool ofxZmqPush::send(void *data, size_t len, bool nonblocking, bool more)
{
	return ofxZmqSocket::send(data, len, nonblocking, more);
}

bool ofxZmqPush::send(const string& data, bool nonblocking, bool more)
{
	return ofxZmqSocket::send((const void*)data.data(), data.size(), nonblocking, more);
}

bool ofxZmqPush::send(const ofBuffer& data, bool nonblocking, bool more)
{
	return ofxZmqSocket::send(data, nonblocking, more);
}
