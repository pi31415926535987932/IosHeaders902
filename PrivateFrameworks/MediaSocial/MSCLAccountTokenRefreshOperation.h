/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:10 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class MSCLAccountStore, SKUIMediaSocialAuthor, NSArray, NSLock;

@interface MSCLAccountTokenRefreshOperation : NSOperation {

	MSCLAccountStore* _accountStore;
	SKUIMediaSocialAuthor* _author;
	NSArray* _inputServices;
	NSLock* _lock;
	/*^block*/id _outputBlock;

}

@property (retain) MSCLAccountStore * accountStore; 
@property (copy) id outputBlock; 
-(void)setAccountStore:(MSCLAccountStore *)arg1 ;
-(MSCLAccountStore *)accountStore;
-(void)main;
-(id)initWithAuthor:(id)arg1 externalServices:(id)arg2 ;
-(void)_registerExternalDestination:(id)arg1 forServiceIdentifier:(id)arg2 accountStore:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_getExternalDestinationForServiceIdentifier:(id)arg1 accountStore:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_getFacebookDestinationForPageIdentifier:(id)arg1 accountStore:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)_ssvServiceIdentifierForMSCLServiceIdentifier:(id)arg1 ;
-(void)setOutputBlock:(id)arg1 ;
-(id)outputBlock;
@end

