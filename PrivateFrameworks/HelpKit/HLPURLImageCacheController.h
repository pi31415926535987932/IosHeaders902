/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HelpKit/HLPURLDataCacheController.h>

@class NSCache;

@interface HLPURLImageCacheController : HLPURLDataCacheController {

	NSCache* _inMemoryImageCache;

}

@property (nonatomic,retain) NSCache * inMemoryImageCache;              //@synthesize inMemoryImageCache=_inMemoryImageCache - In the implementation block
+(id)sharedInstance;
-(void)addInMemoryCacheForImage:(id)arg1 path:(id)arg2 cost:(unsigned)arg3 ;
-(NSCache *)inMemoryImageCache;
-(id)imageFromMemoryCacheForPath:(id)arg1 ;
-(id)newDataCache;
-(void)getImageForURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setInMemoryImageCache:(NSCache *)arg1 ;
-(void)unload;
@end

