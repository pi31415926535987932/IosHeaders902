/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:34 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSString;

@interface CKDFetchWebAuthTokenOperation : CKDDatabaseOperation {

	NSString* _webAuthToken;

}

@property (nonatomic,copy) NSString * webAuthToken;              //@synthesize webAuthToken=_webAuthToken - In the implementation block
-(void)main;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(unsigned long long)activityStart;
-(Class)operationResultClass;
-(void)fillOutOperationResult:(id)arg1 ;
-(void)setWebAuthToken:(NSString *)arg1 ;
-(NSString *)webAuthToken;
@end

