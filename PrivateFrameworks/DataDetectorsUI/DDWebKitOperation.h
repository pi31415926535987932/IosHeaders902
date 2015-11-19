/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:00 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <DataDetectorsUI/DDOperation.h>

@class DOMNode, WebFrame;

@interface DDWebKitOperation : DDOperation {

	DOMNode* _startNode;
	int _startOffset;
	DOMNode* _endNode;
	int _endOffset;

}

@property (nonatomic,retain) DOMNode * startNode;               //@synthesize startNode=_startNode - In the implementation block
@property (assign) int startOffset;                             //@synthesize startOffset=_startOffset - In the implementation block
@property (nonatomic,retain) DOMNode * endNode;                 //@synthesize endNode=_endNode - In the implementation block
@property (assign) int endOffset;                               //@synthesize endOffset=_endOffset - In the implementation block
@property (nonatomic,retain) WebFrame * container; 
-(int)endOffset;
-(int)startOffset;
-(void)setStartOffset:(int)arg1 ;
-(void)cleanup;
-(void)dispatchContainerModificationBlock:(/*^block*/id)arg1 ;
-(char)containerIsReady;
-(char)needsToStartOver;
-(char)doURLificationOnDocument;
-(id)newOperationForStartingOver;
-(id)newOperationForContinuation;
-(void)_applyContainerRestrictionsToTypes;
-(char)_containerReadyForDetection;
-(void)_updateGenerationNumber;
-(char)_rangeValidForContainer;
-(DDScanQueryRef)_createScanQueryForBackend;
-(void)setStartNode:(DOMNode *)arg1 ;
-(void)setEndNode:(DOMNode *)arg1 ;
-(DOMNode *)startNode;
-(DOMNode *)endNode;
-(void)setEndOffset:(int)arg1 ;
@end

