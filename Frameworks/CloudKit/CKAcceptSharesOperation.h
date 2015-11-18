/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:23:56 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSMutableDictionary;

@interface CKAcceptSharesOperation : CKDatabaseOperation {

	NSArray* _shareURLs;
	/*^block*/id _perShareCompletionBlock;
	/*^block*/id _acceptSharesCompletionBlock;
	NSMutableDictionary* _errorsByShareURL;

}

@property (nonatomic,copy) NSArray * shareURLs;                                   //@synthesize shareURLs=_shareURLs - In the implementation block
@property (nonatomic,copy) id perShareCompletionBlock;                            //@synthesize perShareCompletionBlock=_perShareCompletionBlock - In the implementation block
@property (nonatomic,copy) id acceptSharesCompletionBlock;                        //@synthesize acceptSharesCompletionBlock=_acceptSharesCompletionBlock - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * errorsByShareURL;              //@synthesize errorsByShareURL=_errorsByShareURL - In the implementation block
-(void)fillOutOperationInfo:(id)arg1 ;
-(char)CKOperationShouldRun:(id*)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(NSArray *)shareURLs;
-(void)setShareURLs:(NSArray *)arg1 ;
-(id)perShareCompletionBlock;
-(NSMutableDictionary *)errorsByShareURL;
-(id)acceptSharesCompletionBlock;
-(void)setErrorsByShareURL:(NSMutableDictionary *)arg1 ;
-(id)init;
-(id)initWithShareURLs:(id)arg1 ;
-(void)setPerShareCompletionBlock:(id)arg1 ;
-(void)setAcceptSharesCompletionBlock:(id)arg1 ;
-(unsigned long long)activityStart;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
@end

