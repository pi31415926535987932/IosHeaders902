/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:12 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSFileCoordinator, NSURL, NSData;

@interface MFAttachmentSecurityScope : NSObject {

	NSFileCoordinator* _fileCoordinator;
	NSURL* _securityScopedURL;
	NSData* _securityScopeToken;
	NSURL* _secureReadURL;
	char _securedRead;
	NSURL* _secureWriteURL;
	char _securedWrite;

}
+(id)securityScopedURL:(id)arg1 ;
+(id)securityScopedURL:(id)arg1 withToken:(id)arg2 ;
-(id)startReadAccess;
-(void)stopAccess;
-(id)startWriteAccess;
-(void)dealloc;
-(id)data;
-(char)isBundle;
-(id)initWithSecurityScopedURL:(id)arg1 withToken:(id)arg2 ;
-(void)_attachSecurityScope;
-(id)_createTemporaryReadURL:(id)arg1 ;
-(void)_removeTemporaryReadURL;
-(id)securityScopeToken;
-(char)isReadable;
@end

