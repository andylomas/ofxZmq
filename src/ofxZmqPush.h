#pragma once

#include "ofMain.h"
#include "ofxZmq.h"

class ofxZmqPush : public ofxZmqSocket
{
public:

	ofxZmqPush();

	void bind(string addr);
	void unbind(string addr);

	void connect(string addr);
	void disconnect(string addr);

	bool send(const void *data, size_t len, bool nonblocking = false, bool more = false);
	bool send(void *data, size_t len, bool nonblocking = false, bool more = false);
	bool send(const string& data, bool nonblocking = false, bool more = false);
	bool send(const ofBuffer& data, bool nonblocking = false, bool more = false);

};
