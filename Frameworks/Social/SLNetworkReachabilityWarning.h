/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:47:37 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface SLNetworkReachabilityWarning : NSObject {

	/*^block*/id _completionHandler;
	NSString* _serviceType;

}
-(id)initWithServiceType:(id)arg1 ;
-(void)showIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(void)showIfNecessary;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
@end

