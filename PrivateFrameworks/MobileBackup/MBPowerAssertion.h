/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:17 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface MBPowerAssertion : NSObject {

	unsigned _assertionID;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _name;
	double _timeout;

}

@property (nonatomic,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) double timeout;               //@synthesize timeout=_timeout - In the implementation block
+(id)assertionWithName:(id)arg1 timeout:(double)arg2 ;
-(id)initWithName:(id)arg1 timeout:(double)arg2 ;
-(void)drop;
-(double)timeout;
-(void)dealloc;
-(NSString *)name;
-(void)hold;
@end

