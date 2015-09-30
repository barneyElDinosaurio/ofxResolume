//
//  ofxResolume.cpp
//
//	Things.. Pusgmatrix and popmatrix.
//  Created by marioAlzate on 17/ago/15.
//
//

#pragma once
#include "ofMain.h"
#include "ofxOsc.h"


class ofxResolume{
	

public:


	//RESOLUME FUNKS

	void setupResolume(string ipRes,int portRes);
	void show(int layer,int clip);//show a video(COMING)
	void videoOff(int layer, int clip);//COMING
	void rotateVideo(float rotateX,float rotateY,string layer, string clip);//rotate videoclips


	ofxOscSender resSender;//OSC Sender and Resolume OSC sender


};