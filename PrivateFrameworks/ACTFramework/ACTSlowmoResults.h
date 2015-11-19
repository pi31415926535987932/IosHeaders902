/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:45 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ACTFramework.framework/ACTFramework
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSDictionary;

@interface ACTSlowmoResults : NSObject {

	NSMutableDictionary* _results;
	char _verbose;
	double _minTimeBetweenFrames;

}

@property (readonly) NSDictionary * results;                 //@synthesize results=_results - In the implementation block
@property (assign) char verbose;                             //@synthesize verbose=_verbose - In the implementation block
@property (assign) double minTimeBetweenFrames;              //@synthesize minTimeBetweenFrames=_minTimeBetweenFrames - In the implementation block
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(NSDictionary *)results;
-(void)reduceToSingleTimeRange;
-(void)writeToFile:(id)arg1 ;
-(char)verbose;
-(void)setVerbose:(char)arg1 ;
-(void)addVerboseResult:(id)arg1 ;
-(id)copyClusters;
-(double)minTimeBetweenFrames;
-(void)performPass2Clustering;
-(void)performPass1Clustering;
-(void)addFrame:(double)arg1 frameValue:(int)arg2 ;
-(void)mergeClusters:(id)arg1 cluster2:(id)arg2 ;
-(void)setMinTimeBetweenFrames:(double)arg1 ;
-(void)dumpClusters;
@end

