/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:28 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CKTiledLayoutGeneratorScanState : NSObject {

	char _scannedBatchHasCaption;
	int _scanLocation;
	id _scannedBatchID;
	int _scanSpecialSequenceCount;

}

@property (assign,nonatomic) int scanLocation;                          //@synthesize scanLocation=_scanLocation - In the implementation block
@property (nonatomic,retain) id scannedBatchID;                         //@synthesize scannedBatchID=_scannedBatchID - In the implementation block
@property (assign,nonatomic) char scannedBatchHasCaption;               //@synthesize scannedBatchHasCaption=_scannedBatchHasCaption - In the implementation block
@property (assign,nonatomic) int scanSpecialSequenceCount;              //@synthesize scanSpecialSequenceCount=_scanSpecialSequenceCount - In the implementation block
-(int)scanLocation;
-(void)setScannedBatchID:(id)arg1 ;
-(void)setScannedBatchHasCaption:(char)arg1 ;
-(id)scannedBatchID;
-(char)scannedBatchHasCaption;
-(int)scanSpecialSequenceCount;
-(void)setScanSpecialSequenceCount:(int)arg1 ;
-(void)setScanLocation:(int)arg1 ;
@end

