/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:16:02 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AVAssetCacheInternal, NSURL;

@interface AVAssetCache : NSObject {

	AVAssetCacheInternal* _priv;

}

@property (assign,nonatomic) long long maxSize; 
@property (assign,nonatomic) long long maxEntrySize; 
@property (nonatomic,readonly) long long currentSize; 
@property (nonatomic,copy,readonly) NSURL * URL; 
+(id)assetCacheWithURL:(id)arg1 ;
-(long long)maxEntrySize;
-(long long)currentSize;
-(void)removeEntryForKey:(id)arg1 ;
-(long long)sizeOfEntryForKey:(id)arg1 ;
-(id)lastModifiedDateOfEntryForKey:(id)arg1 ;
-(void)dealloc;
-(id)allKeys;
-(long long)maxSize;
-(void)setMaxSize:(long long)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)URL;
-(void)finalize;
-(void)setMaxEntrySize:(long long)arg1 ;
@end

