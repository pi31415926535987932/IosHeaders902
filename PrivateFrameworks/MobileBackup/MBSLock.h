/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:17 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface MBSLock : NSObject {

	int _state;
	int _type;
	NSString* _owner;
	unsigned _timeout;

}

@property (assign,nonatomic) int state;                             //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSString * stateString; 
@property (nonatomic,readonly) int type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * owner;                    //@synthesize owner=_owner - In the implementation block
@property (nonatomic,readonly) unsigned timeout;                    //@synthesize timeout=_timeout - In the implementation block
+(id)lockWithState:(int)arg1 type:(int)arg2 owner:(id)arg3 timeout:(unsigned)arg4 ;
+(id)lockWithState:(int)arg1 type:(int)arg2 timeout:(unsigned)arg3 ;
+(id)stringForState:(int)arg1 ;
-(id)initWithState:(int)arg1 type:(int)arg2 owner:(id)arg3 timeout:(unsigned)arg4 ;
-(id)initWithState:(int)arg1 type:(int)arg2 timeout:(unsigned)arg3 ;
-(unsigned)timeout;
-(void)dealloc;
-(id)description;
-(int)state;
-(void)setState:(int)arg1 ;
-(int)type;
-(NSString *)stateString;
-(NSString *)owner;
@end

