/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:43 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
@class NSMutableDictionary, NSMutableSet, NSString, MRImageManager, MRImage, NSDictionary;

@interface MRAssetMaster : NSObject {

	NSMutableDictionary* _players;
	NSMutableSet* _unusedPlayers;
	char _isEmbeddedAsset;
	char _isValid;
	char _isSupportedMovie;
	NSString* _path;
	MRImageManager* _imageManager;
	MRImage* _thumbnail;
	double _timestamp;
	CGSize _originalSize;

}

@property (readonly) NSString * path;                            //@synthesize path=_path - In the implementation block
@property (readonly) MRImageManager * imageManager;              //@synthesize imageManager=_imageManager - In the implementation block
@property (readonly) MRImage * thumbnail;                        //@synthesize thumbnail=_thumbnail - In the implementation block
@property (assign,nonatomic) double timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) CGSize originalSize;                        //@synthesize originalSize=_originalSize - In the implementation block
@property (readonly) char isValid;                               //@synthesize isValid=_isValid - In the implementation block
@property (readonly) char isEmbeddedAsset;                       //@synthesize isEmbeddedAsset=_isEmbeddedAsset - In the implementation block
@property (readonly) char isSupportedMovie;                      //@synthesize isSupportedMovie=_isSupportedMovie - In the implementation block
@property (readonly) NSDictionary * players;                     //@synthesize players=_players - In the implementation block
-(char)purgeResources;
-(char)isEmbeddedAsset;
-(char)isSupportedMovie;
-(void)relinquishPlayer:(id)arg1 ;
-(id)thumbnailForFlagsMonochromatic:(char)arg1 mipmap:(char)arg2 powerOfTwo:(char)arg3 ;
-(id)initWithPath:(id)arg1 originalSize:(CGSize)arg2 isEmbeddedAsset:(char)arg3 isSupportedMovie:(char)arg4 andImageManager:(id)arg5 ;
-(id)retainedByUserPlayerForSize:(CGSize)arg1 andOptions:(id)arg2 ;
-(void)dealloc;
-(double)timestamp;
-(void)invalidate;
-(char)isValid;
-(void)setTimestamp:(double)arg1 ;
-(NSString *)path;
-(MRImage *)thumbnail;
-(CGSize)originalSize;
-(MRImageManager *)imageManager;
-(NSDictionary *)players;
@end

