/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:37:07 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDate;

@interface _NCWidgetControllerRequestLimiter : NSObject {

	NSDate* _lastRequestDate;
	char _isThrottled;
	int _requestCount;

}
+(id)sharedInstance;
-(char)isRequestPermitted;
-(void)dealloc;
@end

