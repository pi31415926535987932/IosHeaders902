/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:06 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaControlSender.framework/MediaControlSender
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AirPlayControllerAsync
@required
-(void)setProperty:(id)arg1 qualifier:(id)arg2 value:(id)arg3 completion:(/*^block*/id)arg4;
-(void)postEvent:(id)arg1 qualifier:(id)arg2 params:(id)arg3 completion:(/*^block*/id)arg4;
-(void)getProperty:(id)arg1 qualifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)performCommand:(id)arg1 qualifier:(id)arg2 params:(id)arg3 completion:(/*^block*/id)arg4;

@end

