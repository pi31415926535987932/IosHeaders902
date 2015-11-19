/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:41 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CNVirtualSchedulerJob : NSObject {

	unsigned _time;
	/*^block*/id _block;

}

@property (assign) unsigned time;                //@synthesize time=_time - In the implementation block
@property (copy,readonly) id block;              //@synthesize block=_block - In the implementation block
+(id)jobWithTime:(unsigned)arg1 block:(/*^block*/id)arg2 ;
-(id)block;
-(void)dealloc;
-(id)description;
-(void)setTime:(unsigned)arg1 ;
-(unsigned)time;
-(id)initWithTime:(unsigned)arg1 block:(/*^block*/id)arg2 ;
@end

