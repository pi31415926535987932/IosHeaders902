/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:29 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocs/BROperation.h>

@class CKShare;

@interface BRShareSaveOperation : BROperation {

	CKShare* _share;
	/*^block*/id _shareSaveCompletionBlock;

}

@property (copy) id shareSaveCompletionBlock;              //@synthesize shareSaveCompletionBlock=_shareSaveCompletionBlock - In the implementation block
@property (nonatomic,retain) CKShare * share;              //@synthesize share=_share - In the implementation block
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)dealloc;
-(void)main;
-(id)shareSaveCompletionBlock;
-(void)setShareSaveCompletionBlock:(id)arg1 ;
-(void)setShare:(CKShare *)arg1 ;
-(CKShare *)share;
-(id)initWithShare:(id)arg1 ;
@end

