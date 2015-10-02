#include "ofxResolume.h"

void ofxResolume::setupResolume(string ipRes,int portRes){//Setup for OSC Resolume sender
		resSender.setup(ipRes, portRes);
		//hfda
}

void ofxResolume::rotateVideo(float rotateX,float rotateY,string layer, string clip){
	//Rotate a video clip selected from Resolume in X Y
		rotateX = ofMap(rotateX,0.0,100.0,0.0,1.0);//Remap values for RESOLUME
		ofxOscMessage mr;
		mr.setAddress("/layer1/video/rotatex/values");
		mr.addFloatArg(rotateX);
		resSender.sendMessage(mr);

		rotateY = ofMap(rotateY,0.0,3.0,0.0,1.0);//Remap values for RESOLUME
		mr.setAddress("/layer1/video/rotatey/values");
		mr.addFloatArg(rotateY);
		resSender.sendMessage(mr);
}

//preuba trin bla
void ofxResolume::show(int layer, int clip){
	//Rotate a video clip selected from Resolume in X Y
		ofxOscMessage mr;
		mr.setAddress("/layer"+ofToString(layer)+"/clip"+ofToString(clip)+"/connect");
		mr.addIntArg(1);//add the clip to the composition
		resSender.sendMessage(mr);

}


