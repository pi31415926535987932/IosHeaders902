/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:25 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PBCodable, NSString;

@interface _NACIDSMessageRecord : NSObject {

	PBCodable* _message;
	int _type;
	NSString* _queueOne;
	double _timeout;

}

@property (nonatomic,retain) PBCodable * message;              //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) int type;                         //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) double timeout;                   //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,copy) NSString * queueOne;                //@synthesize queueOne=_queueOne - In the implementation block
-(double)timeout;
-(void)setType:(int)arg1 ;
-(int)type;
-(PBCodable *)message;
-(void)setMessage:(PBCodable *)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(NSString *)queueOne;
-(void)setQueueOne:(NSString *)arg1 ;
@end

