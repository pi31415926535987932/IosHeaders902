/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:55 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol DATrustHandlerDelegate;
#import <DataAccess/DataAccess-Structs.h>
@class NSMutableDictionary;

@interface DATrustHandler : NSObject {

	id<DATrustHandlerDelegate> _delegate;
	NSMutableDictionary* _haveWarnedAboutCertDict;

}

@property (assign,nonatomic,__weak) id<DATrustHandlerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * haveWarnedAboutCertDict;              //@synthesize haveWarnedAboutCertDict=_haveWarnedAboutCertDict - In the implementation block
-(void)setDelegate:(id<DATrustHandlerDelegate>)arg1 ;
-(id<DATrustHandlerDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(char)resetCertWarnings;
-(int)_actionForTrust:(SecTrustRef)arg1 host:(id)arg2 service:(id)arg3 ;
-(char)haveWarnedAboutCert:(id)arg1 forHost:(id)arg2 ;
-(id)_serverSuffixesToAlwaysFail;
-(void)setHaveWarnedAboutCert:(id)arg1 forHost:(id)arg2 ;
-(void)handleTrust:(SecTrustRef)arg1 forHost:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(NSMutableDictionary *)haveWarnedAboutCertDict;
-(void)setHaveWarnedAboutCertDict:(NSMutableDictionary *)arg1 ;
-(char)handleTrustChallenge:(id)arg1 ;
@end

