/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/suggestd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSSecureCoding;
@class SGDWorkQueueName, NSString, NSObject;

@interface SGDWorkQueueItem : NSObject {

	SGDWorkQueueName* _name;
	NSString* _filename;
	NSObject*<NSSecureCoding> _object;

}

@property (nonatomic,readonly) unsigned state; 
@property (nonatomic,readonly) unsigned fails; 
@property (nonatomic,readonly) NSObject*<NSSecureCoding> object;              //@synthesize object=_object - In the implementation block
@property (nonatomic,readonly) NSString * queueId; 
-(id)initWithObject:(id)arg1 name:(id)arg2 dir:(id)arg3 ;
-(unsigned)fails;
-(void)markAsFailed;
-(NSString *)queueId;
-(void)dealloc;
-(id)description;
-(unsigned)state;
-(NSObject*<NSSecureCoding>)object;
-(void)finish;
@end

