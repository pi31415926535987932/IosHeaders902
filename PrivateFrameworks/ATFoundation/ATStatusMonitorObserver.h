/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:46 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ATStatusMonitorObserver <NSObject>
@optional
-(void)monitor:(id)arg1 didUpdateWithStatus:(id)arg2;

@required
-(void)connection:(id)arg1 updatedAssets:(id)arg2;
-(void)connection:(id)arg1 updatedProgress:(id)arg2;

@end

