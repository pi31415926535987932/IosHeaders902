/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:28 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <libobjc.A.dylib/Endpointer.h>

@class NSMutableData, NSDictionary, NSString;

@interface CKAudioAnalyzer : NSObject <Endpointer> {

	char _detectedMusic;
	double _sampleRate;
	double _samplesSeen;
	unsigned long _frameRate;
	int _endpointMode;
	double _startWaitTime;
	double _interspeechWaitTime;
	double _endWaitTime;
	NSMutableData* _floatSampleBuffer;
	unsigned _framesSeen;
	SCD_Struct_CK17 _frameAnalysisArray[25];
	OpaqueAudioComponentInstanceRef _audioUnitEPVAD;
	NSDictionary* _modelDict;
	unsigned long _inMaxSamplesPerBuffer;
	float _speechPaddingFactor;
	float _decoderLatency;
	float _heuristicWindowSec;
	float _heuristicTransitionRatio;

}

@property (assign,nonatomic) unsigned long inMaxSamplesPerBuffer;              //@synthesize inMaxSamplesPerBuffer=_inMaxSamplesPerBuffer - In the implementation block
@property (assign,nonatomic) float speechPaddingFactor;                        //@synthesize speechPaddingFactor=_speechPaddingFactor - In the implementation block
@property (assign,nonatomic) float decoderLatency;                             //@synthesize decoderLatency=_decoderLatency - In the implementation block
@property (assign,nonatomic) float heuristicWindowSec;                         //@synthesize heuristicWindowSec=_heuristicWindowSec - In the implementation block
@property (assign,nonatomic) float heuristicTransitionRatio;                   //@synthesize heuristicTransitionRatio=_heuristicTransitionRatio - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) int endpointMode;                                           //@synthesize endpointMode=_endpointMode - In the implementation block
@property (assign) double startWaitTime;                                       //@synthesize startWaitTime=_startWaitTime - In the implementation block
@property (assign) double interspeechWaitTime;                                 //@synthesize interspeechWaitTime=_interspeechWaitTime - In the implementation block
@property (assign) double endWaitTime;                                         //@synthesize endWaitTime=_endWaitTime - In the implementation block
+(void)initialize;
-(void)dealloc;
-(id)init;
-(void)reset;
-(char)configureWithSampleRate:(double)arg1 andFrameRate:(unsigned long)arg2 ;
-(int)getStatus:(AudioQueueBuffer*)arg1 ;
-(int)endpointMode;
-(void)setEndpointMode:(int)arg1 ;
-(double)startWaitTime;
-(void)setStartWaitTime:(double)arg1 ;
-(double)interspeechWaitTime;
-(void)setInterspeechWaitTime:(double)arg1 ;
-(double)endWaitTime;
-(void)setEndWaitTime:(double)arg1 ;
-(unsigned long)inMaxSamplesPerBuffer;
-(void)setInMaxSamplesPerBuffer:(unsigned long)arg1 ;
-(float)speechPaddingFactor;
-(void)setSpeechPaddingFactor:(float)arg1 ;
-(float)decoderLatency;
-(void)setDecoderLatency:(float)arg1 ;
-(float)heuristicWindowSec;
-(void)setHeuristicWindowSec:(float)arg1 ;
-(float)heuristicTransitionRatio;
-(void)setHeuristicTransitionRatio:(float)arg1 ;
@end

