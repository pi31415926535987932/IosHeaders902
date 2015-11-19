/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:30 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SCROBrailleEvent : NSObject {

	int _type;
	id _data;
	id _data2;
	id _data3;
	char _shouldDisplay;

}

@property (assign,nonatomic) char shouldDisplay;              //@synthesize shouldDisplay=_shouldDisplay - In the implementation block
+(id)eventWithType:(int)arg1 data:(id)arg2 ;
+(id)eventWithType:(int)arg1 data:(id)arg2 data2:(id)arg3 data3:(id)arg4 ;
-(void)dealloc;
-(id)description;
-(int)type;
-(id)data;
-(id)data2;
-(char)shouldDisplay;
-(id)data3;
-(id)initWithType:(int)arg1 data:(id)arg2 data2:(id)arg3 data3:(id)arg4 ;
-(void)setShouldDisplay:(char)arg1 ;
@end

