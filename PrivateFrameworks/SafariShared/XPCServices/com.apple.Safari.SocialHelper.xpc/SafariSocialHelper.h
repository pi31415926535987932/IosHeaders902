/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:28 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/XPCServices/com.apple.Safari.SocialHelper.xpc/com.apple.Safari.SocialHelper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/SafariSocialHelper.h>

@protocol SafariSocialHelper
@required
-(void)performGetItemsRequestForServiceType:(id)arg1 URL:(id)arg2 parameters:(id)arg3 accountIdentifier:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)performRepostRequestForServiceType:(id)arg1 URL:(id)arg2 accountIdentifier:(id)arg3 completionHandler:(/*^block*/id)arg4;

@end


@interface SafariSocialHelper : NSObject <SafariSocialHelper>
-(void)_performRequestForServiceType:(id)arg1 requestMethod:(int)arg2 URL:(id)arg3 parameters:(id)arg4 accountIdentifier:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)performGetItemsRequestForServiceType:(id)arg1 URL:(id)arg2 parameters:(id)arg3 accountIdentifier:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)performRepostRequestForServiceType:(id)arg1 URL:(id)arg2 accountIdentifier:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

