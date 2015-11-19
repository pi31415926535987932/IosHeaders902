/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:26 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoLeash.framework/NanoLeash
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <NanoLeash/NanoLeash-Structs.h>
@class CALayer;

@interface GraphViewSegment : NSObject {

	float avghistory[33];
	float rssihistory[33];
	int index;
	CALayer* layer;

}

@property (nonatomic,readonly) CALayer * layer; 
-(char)isFull;
-(CALayer *)layer;
-(id)init;
-(void)reset;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(id)accessibilityValue;
-(char)isVisibleInRect:(CGRect)arg1 ;
-(char)addAvg:(float)arg1 liveRSSI:(float)arg2 ;
@end

