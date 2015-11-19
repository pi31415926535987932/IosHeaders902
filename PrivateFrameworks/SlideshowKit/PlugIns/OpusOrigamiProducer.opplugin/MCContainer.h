/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:43 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCObject.h>

@class MCAudioPlaylist, NSDictionary, MCPlug;

@interface MCContainer : MCObject {

	unsigned short mFlags;
	unsigned short mSpecialRetainCount;
	MCAudioPlaylist* mAudioPlaylist;
	NSDictionary* mInitialState;
	MCPlug* mReferencingPlug;

}

@property (readonly) MCAudioPlaylist * audioPlaylist; 
@property (readonly) MCAudioPlaylist * audioPlaylistCreateIfNeeded; 
@property (readonly) MCPlug * referencingPlug; 
@property (retain) NSDictionary * initialState; 
-(MCPlug *)referencingPlug;
-(void)specialRelease;
-(id)specialRetain;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(void)demolish;
-(void)referenceByPlug:(id)arg1 ;
-(void)unreferenceByPlug:(id)arg1 ;
-(MCAudioPlaylist *)audioPlaylistCreateIfNeeded;
-(void)dealloc;
-(id)init;
-(id)imprint;
-(MCAudioPlaylist *)audioPlaylist;
-(void)setInitialState:(NSDictionary *)arg1 ;
-(NSDictionary *)initialState;
@end
