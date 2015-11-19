/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:55 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DABookmarkDAV.framework/DADaemonBookmarkDAV.bundle/DADaemonBookmarkDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DADaemonBookmarkDAV/BookmarkDAVDaemonAccount.h>

@class NSString;

@interface BookmarkDAViCloudDaemonAccount : BookmarkDAVDaemonAccount {

	NSString* _host;
	int _useSSL;
	int _port;

}
-(id)host;
-(int)port;
-(void)noteHomeSetOnDifferentHost:(id)arg1 ;
-(char)shouldHandleHTTPCookiesForURL:(id)arg1 ;
-(char)shouldSendClientInfoHeaderForURL:(id)arg1 ;
-(char)shouldCompressRequests;
-(id)getAppleIDSession;
-(id)initWithBackingAccountInfo:(id)arg1 ;
-(void)setHost:(id)arg1 ;
-(char)useSSL;
@end

