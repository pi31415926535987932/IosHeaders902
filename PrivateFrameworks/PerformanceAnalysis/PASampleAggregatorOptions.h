/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:49 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface PASampleAggregatorOptions : NSObject {

	char _headerOnly;
	char _tabDelineateBinaryImageSections;
	char _binaryImagesBeforeStacks;
	char _printSpinSignatureStack;
	char _printHeavyStacks;
	char _displayFrameAddresses;
	char _displaySub1MsCpuTime;
	char _displayStateChangesOnIdleThreads;
	char _displayProcessFirstLastTimes;
	char _displayOffsetsFromUnnamedSymbols;
	char _displaySymbolInformation;
	char _displayBinaryImageAddresses;
	char _displayBinaryImagesLackingNameOrPath;
	char _displayRunnableThreads;
	char _displayBlockedThreads;
	char _displayIdleWorkQueueThreads;

}

@property (assign) char headerOnly;                                        //@synthesize headerOnly=_headerOnly - In the implementation block
@property (assign) char tabDelineateBinaryImageSections;                   //@synthesize tabDelineateBinaryImageSections=_tabDelineateBinaryImageSections - In the implementation block
@property (assign) char binaryImagesBeforeStacks;                          //@synthesize binaryImagesBeforeStacks=_binaryImagesBeforeStacks - In the implementation block
@property (assign) char printSpinSignatureStack;                           //@synthesize printSpinSignatureStack=_printSpinSignatureStack - In the implementation block
@property (assign) char printHeavyStacks;                                  //@synthesize printHeavyStacks=_printHeavyStacks - In the implementation block
@property (assign) char displayFrameAddresses;                             //@synthesize displayFrameAddresses=_displayFrameAddresses - In the implementation block
@property (assign) char displaySub1MsCpuTime;                              //@synthesize displaySub1MsCpuTime=_displaySub1MsCpuTime - In the implementation block
@property (assign) char displayStateChangesOnIdleThreads;                  //@synthesize displayStateChangesOnIdleThreads=_displayStateChangesOnIdleThreads - In the implementation block
@property (assign) char displayProcessFirstLastTimes;                      //@synthesize displayProcessFirstLastTimes=_displayProcessFirstLastTimes - In the implementation block
@property (assign) char displayOffsetsFromUnnamedSymbols;                  //@synthesize displayOffsetsFromUnnamedSymbols=_displayOffsetsFromUnnamedSymbols - In the implementation block
@property (assign) char displaySymbolInformation;                          //@synthesize displaySymbolInformation=_displaySymbolInformation - In the implementation block
@property (assign) char displayBinaryImageAddresses;                       //@synthesize displayBinaryImageAddresses=_displayBinaryImageAddresses - In the implementation block
@property (assign) char displayBinaryImagesLackingNameOrPath;              //@synthesize displayBinaryImagesLackingNameOrPath=_displayBinaryImagesLackingNameOrPath - In the implementation block
@property (assign) char displayRunnableThreads;                            //@synthesize displayRunnableThreads=_displayRunnableThreads - In the implementation block
@property (assign) char displayBlockedThreads;                             //@synthesize displayBlockedThreads=_displayBlockedThreads - In the implementation block
@property (assign) char displayIdleWorkQueueThreads;                       //@synthesize displayIdleWorkQueueThreads=_displayIdleWorkQueueThreads - In the implementation block
@property (assign) char verbose; 
-(id)init;
-(char)verbose;
-(void)setVerbose:(char)arg1 ;
-(char)displayFrameAddresses;
-(char)displayStateChangesOnIdleThreads;
-(char)displaySub1MsCpuTime;
-(char)displayProcessFirstLastTimes;
-(char)displayOffsetsFromUnnamedSymbols;
-(char)displaySymbolInformation;
-(char)displayBinaryImageAddresses;
-(char)displayBinaryImagesLackingNameOrPath;
-(char)displayBlockedThreads;
-(char)displayIdleWorkQueueThreads;
-(void)setDisplayFrameAddresses:(char)arg1 ;
-(void)setDisplayStateChangesOnIdleThreads:(char)arg1 ;
-(void)setDisplaySub1MsCpuTime:(char)arg1 ;
-(void)setDisplayProcessFirstLastTimes:(char)arg1 ;
-(void)setDisplayOffsetsFromUnnamedSymbols:(char)arg1 ;
-(void)setDisplaySymbolInformation:(char)arg1 ;
-(void)setDisplayBinaryImageAddresses:(char)arg1 ;
-(void)setDisplayBinaryImagesLackingNameOrPath:(char)arg1 ;
-(void)setDisplayBlockedThreads:(char)arg1 ;
-(void)setDisplayIdleWorkQueueThreads:(char)arg1 ;
-(char)headerOnly;
-(void)setHeaderOnly:(char)arg1 ;
-(char)tabDelineateBinaryImageSections;
-(void)setTabDelineateBinaryImageSections:(char)arg1 ;
-(char)binaryImagesBeforeStacks;
-(void)setBinaryImagesBeforeStacks:(char)arg1 ;
-(char)printSpinSignatureStack;
-(void)setPrintSpinSignatureStack:(char)arg1 ;
-(char)printHeavyStacks;
-(void)setPrintHeavyStacks:(char)arg1 ;
-(char)displayRunnableThreads;
-(void)setDisplayRunnableThreads:(char)arg1 ;
@end

