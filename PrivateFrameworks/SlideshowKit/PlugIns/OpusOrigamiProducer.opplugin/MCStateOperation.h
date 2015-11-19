/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCAction.h>

@class NSString;

@interface MCStateOperation : MCAction {

	NSString* _stateKey;

}

@property (copy) NSString * stateKey;                          //@synthesize stateKey=_stateKey - In the implementation block
@property (assign,nonatomic) char alwaysNotifies; 
@property (assign,nonatomic) char recordsTime; 
+(id)stateOperationForTargetPlugObjectID:(id)arg1 withStateKey:(id)arg2 ;
-(char)recordsTime;
-(void)setAlwaysNotifies:(char)arg1 ;
-(void)demolish;
-(id)initWithImprint:(id)arg1 ;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(void)setStateKey:(NSString *)arg1 ;
-(NSString *)stateKey;
-(void)setRecordsTime:(char)arg1 ;
-(char)alwaysNotifies;
-(id)description;
-(id)imprint;
@end
