/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:13:55 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CSIndexExtensionDelegate <NSObject>
@required
-(void)indexRequestsPerformJob:(id)arg1 forBundle:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)indexRequestsPerformJob:(id)arg1 perExtensionCompletionHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)indexRequestsPerformJob:(id)arg1 extensions:(id)arg2 perExtensionCompletionHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4;

@end

