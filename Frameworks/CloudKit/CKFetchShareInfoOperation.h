/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:23:55 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKOperation.h>

@class NSArray, NSMutableDictionary;

@interface CKFetchShareInfoOperation : CKOperation {

	NSArray* _shareURLs;
	/*^block*/id _perShareInfoBlock;
	/*^block*/id _fetchShareInfoCompletionBlock;
	NSMutableDictionary* _shareInfoByURL;
	NSMutableDictionary* _errorsByURL;

}

@property (nonatomic,retain) NSArray * shareURLs;                               //@synthesize shareURLs=_shareURLs - In the implementation block
@property (nonatomic,copy) id perShareInfoBlock;                                //@synthesize perShareInfoBlock=_perShareInfoBlock - In the implementation block
@property (nonatomic,copy) id fetchShareInfoCompletionBlock;                    //@synthesize fetchShareInfoCompletionBlock=_fetchShareInfoCompletionBlock - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * shareInfoByURL;              //@synthesize shareInfoByURL=_shareInfoByURL - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * errorsByURL;                 //@synthesize errorsByURL=_errorsByURL - In the implementation block
-(void)fillOutOperationInfo:(id)arg1 ;
-(char)CKOperationShouldRun:(id*)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(NSArray *)shareURLs;
-(id)perShareInfoBlock;
-(NSMutableDictionary *)errorsByURL;
-(NSMutableDictionary *)shareInfoByURL;
-(id)fetchShareInfoCompletionBlock;
-(void)setShareURLs:(NSArray *)arg1 ;
-(void)setShareInfoByURL:(NSMutableDictionary *)arg1 ;
-(void)setErrorsByURL:(NSMutableDictionary *)arg1 ;
-(id)initWithShareURLs:(id)arg1 ;
-(void)setPerShareInfoBlock:(id)arg1 ;
-(void)setFetchShareInfoCompletionBlock:(id)arg1 ;
-(unsigned long long)activityStart;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
@end

