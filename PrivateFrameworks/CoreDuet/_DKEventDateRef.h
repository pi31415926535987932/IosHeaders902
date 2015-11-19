/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:43 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDate, _DKEvent;

@interface _DKEventDateRef : NSObject {

	NSDate* _date;
	unsigned _type;
	_DKEvent* _event;

}

@property (retain) NSDate * date;                 //@synthesize date=_date - In the implementation block
@property (assign) unsigned type;                 //@synthesize type=_type - In the implementation block
@property (retain) _DKEvent * event;              //@synthesize event=_event - In the implementation block
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(NSDate *)date;
-(_DKEvent *)event;
-(void)setEvent:(_DKEvent *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(id)initWithDate:(id)arg1 type:(unsigned)arg2 event:(id)arg3 ;
@end

