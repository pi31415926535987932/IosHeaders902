/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:45 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ACTFramework.framework/ACTFramework
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ACTFramework/ACTFramework-Structs.h>
#import <ACTFramework/ACTVideoProcessor.h>

@class NSURL, NSDictionary, ACTSlowmoResults;

@interface ACTVideoMotionDetector : ACTVideoProcessor {

	NSURL* _url;
	NSDictionary* _result;
	double _startTimestamp;
	sbp_Slowmo_Projection* _projections[2];
	int _curProjIndex;
	int _frameCount;
	int _processedFrameCount;
	double _lastFrameTimestamp;
	ACTSlowmoResults* _results;
	char _outputRawMarkers;
	char _verbose;
	char _skipSecondPass;
	char _singleTimeRange;
	float _rowGradient[3264];
	float _colGradient[3264];

}

@property (readonly) NSURL * url;                        //@synthesize url=_url - In the implementation block
@property (readonly) NSDictionary * result;              //@synthesize result=_result - In the implementation block
+(id)motionDetectorWithURL:(id)arg1 options:(id)arg2 ;
-(void)dealloc;
-(NSURL *)url;
-(NSDictionary *)result;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
-(void)processVideo;
-(void)finishProcessing;
-(void)startProcessing;
-(unsigned char)calculateProjectionSignature:(_sbp_Slowmo_Projection*)arg1 buffer:(CVBufferRef)arg2 ;
-(void)processBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)gradientForSignature:(float*)arg1 gradient:(float*)arg2 count:(int)arg3 ;
@end

