#pragma once

#include "ofMain.h"
#include "ofxZmq.h"

class ofxZmqPull : public ofxZmqSocket
{
public:

	ofxZmqPull();

	void bind(string addr);
	void unbind(string addr);

	void connect(string addr);
	void disconnect(string addr);

	bool receive(string &data);
	bool receive(ofBuffer &data);

	bool hasWaitingMessage(long timeout_millis = 0);
	bool getNextMessage(string &data);
	bool getNextMessage(ofBuffer &data);
};
