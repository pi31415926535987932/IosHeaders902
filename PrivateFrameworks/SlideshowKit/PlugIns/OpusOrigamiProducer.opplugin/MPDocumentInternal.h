/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:43 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableDictionary, NSRecursiveLock, MPLayerGroup, NSLock, NSUndoManager, NSURL;

@interface MPDocumentInternal : NSObject {

	NSString* uuid;
	NSString* lastRandomTransition;
	NSMutableDictionary* orderedRandomTransitions;
	NSRecursiveLock* propertiesLock;
	MPLayerGroup* documentLayerGroup;
	char savesPathsAsAbsolute;
	char assetLogging;
	NSMutableDictionary* cachedAbsolutePaths;
	NSMutableDictionary* cachedAbsoluteStillPaths;
	NSLock* cachedPathLock;
	NSUndoManager* undoManager;
	NSURL* fileURL;
	int batchModifyCount;
	char isInBatchModify;
	char needsActionConfigure;
	NSMutableDictionary* cachedActionableLayers;
	char cacheAbsolutePathOverride;
	char alwaysLookupAbsolutePaths;

}

@property (nonatomic,retain) NSString * lastRandomTransition; 
@property (nonatomic,retain) NSMutableDictionary * orderedRandomTransitions; 
@property (nonatomic,retain) NSRecursiveLock * propertiesLock; 
@property (nonatomic,retain) MPLayerGroup * documentLayerGroup; 
@property (assign,nonatomic) char savesPathsAsAbsolute; 
@property (assign,nonatomic) char assetLogging; 
@property (nonatomic,retain) NSMutableDictionary * cachedAbsolutePaths; 
@property (nonatomic,retain) NSMutableDictionary * cachedAbsoluteStillPaths; 
@property (nonatomic,retain) NSLock * cachedPathLock; 
@property (nonatomic,retain) NSUndoManager * undoManager; 
@property (assign,nonatomic) int batchModifyCount; 
@property (assign,nonatomic) char isInBatchModify; 
@property (assign,nonatomic) char needsActionConfigure; 
@property (nonatomic,retain) NSMutableDictionary * cachedActionableLayers; 
@property (nonatomic,retain) NSURL * fileURL; 
@property (nonatomic,copy) NSString * uuid; 
@property (assign,nonatomic) char cacheAbsolutePathOverride; 
@property (assign,nonatomic) char alwaysLookupAbsolutePaths; 
-(char)assetLogging;
-(NSLock *)cachedPathLock;
-(char)isInBatchModify;
-(NSRecursiveLock *)propertiesLock;
-(void)setCachedActionableLayers:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)cachedActionableLayers;
-(void)setSavesPathsAsAbsolute:(char)arg1 ;
-(int)batchModifyCount;
-(char)needsActionConfigure;
-(NSString *)lastRandomTransition;
-(void)setPropertiesLock:(NSRecursiveLock *)arg1 ;
-(void)setAssetLogging:(char)arg1 ;
-(void)setCachedAbsolutePaths:(NSMutableDictionary *)arg1 ;
-(void)setCachedAbsoluteStillPaths:(NSMutableDictionary *)arg1 ;
-(void)setCachedPathLock:(NSLock *)arg1 ;
-(void)setBatchModifyCount:(int)arg1 ;
-(void)setIsInBatchModify:(char)arg1 ;
-(void)setNeedsActionConfigure:(char)arg1 ;
-(void)setCacheAbsolutePathOverride:(char)arg1 ;
-(void)setAlwaysLookupAbsolutePaths:(char)arg1 ;
-(void)setLastRandomTransition:(NSString *)arg1 ;
-(NSMutableDictionary *)orderedRandomTransitions;
-(void)setOrderedRandomTransitions:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)cachedAbsolutePaths;
-(NSMutableDictionary *)cachedAbsoluteStillPaths;
-(char)alwaysLookupAbsolutePaths;
-(char)cacheAbsolutePathOverride;
-(void)setDocumentLayerGroup:(MPLayerGroup *)arg1 ;
-(MPLayerGroup *)documentLayerGroup;
-(char)savesPathsAsAbsolute;
-(void)dealloc;
-(NSUndoManager *)undoManager;
-(NSString *)uuid;
-(NSURL *)fileURL;
-(void)setUndoManager:(NSUndoManager *)arg1 ;
-(void)setUuid:(NSString *)arg1 ;
-(void)setFileURL:(NSURL *)arg1 ;
@end

