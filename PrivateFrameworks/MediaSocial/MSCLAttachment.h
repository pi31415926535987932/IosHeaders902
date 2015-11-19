/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:10 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaSocial/MediaSocial-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MSCLStoreItem, NSArray, UIImage, NSURL, NSString, NSData;

@interface MSCLAttachment : NSObject <NSCopying> {

	MSCLStoreItem* _album;
	NSArray* _artists;
	UIImage* _assetImage;
	NSURL* _assetURL;
	NSString* _attachmentDescription;
	NSString* _categoryName;
	NSData* _data;
	double _duration;
	char _explicitContent;
	NSString* _message;
	CGSize _pixelSize;
	UIImage* _thumbnailImage;
	double _thumbnailImageTime;
	NSString* _title;
	NSString* _uti;

}

@property (nonatomic,readonly) int attachmentType; 
@property (nonatomic,retain) UIImage * assetImage;                                       //@synthesize assetImage=_assetImage - In the implementation block
@property (nonatomic,copy) NSURL * assetURL;                                             //@synthesize assetURL=_assetURL - In the implementation block
@property (nonatomic,copy) NSData * data;                                                //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) NSString * UTI;                                               //@synthesize uti=_uti - In the implementation block
@property (assign,nonatomic) double duration;                                            //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) CGSize pixelSize;                                           //@synthesize pixelSize=_pixelSize - In the implementation block
@property (nonatomic,copy) MSCLStoreItem * album;                                        //@synthesize album=_album - In the implementation block
@property (nonatomic,copy) NSArray * artists;                                            //@synthesize artists=_artists - In the implementation block
@property (nonatomic,copy) NSString * attachmentDescription;                             //@synthesize attachmentDescription=_attachmentDescription - In the implementation block
@property (nonatomic,copy) NSString * categoryName;                                      //@synthesize categoryName=_categoryName - In the implementation block
@property (assign,getter=isExplicitContent,nonatomic) char explicitContent;              //@synthesize explicitContent=_explicitContent - In the implementation block
@property (nonatomic,copy) NSString * message;                                           //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) UIImage * thumbnailImage;                                   //@synthesize thumbnailImage=_thumbnailImage - In the implementation block
@property (assign,nonatomic) double thumbnailImageTime;                                  //@synthesize thumbnailImageTime=_thumbnailImageTime - In the implementation block
@property (nonatomic,copy) NSString * title;                                             //@synthesize title=_title - In the implementation block
-(char)isExplicitContent;
-(MSCLStoreItem *)album;
-(UIImage *)thumbnailImage;
-(void)setAlbum:(MSCLStoreItem *)arg1 ;
-(NSURL *)assetURL;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)UTI;
-(void)setUTI:(NSString *)arg1 ;
-(NSString *)attachmentDescription;
-(void)setAttachmentDescription:(NSString *)arg1 ;
-(id)copyMediaSocialPostAttachment;
-(UIImage *)assetImage;
-(id)initWithAssetURL:(id)arg1 typeIdentifier:(id)arg2 ;
-(id)initWithImage:(id)arg1 typeIdentifier:(id)arg2 ;
-(id)initWithAssetData:(id)arg1 typeIdentifier:(id)arg2 ;
-(void)setThumbnailImageTime:(double)arg1 ;
-(double)thumbnailImageTime;
-(void)setPixelSize:(CGSize)arg1 ;
-(void)setAssetImage:(UIImage *)arg1 ;
-(CGSize)pixelSize;
-(NSString *)categoryName;
-(void)setCategoryName:(NSString *)arg1 ;
-(void)setThumbnailImage:(UIImage *)arg1 ;
-(void)setExplicitContent:(char)arg1 ;
-(void)setArtists:(NSArray *)arg1 ;
-(void)setAssetURL:(NSURL *)arg1 ;
-(int)attachmentType;
-(NSArray *)artists;
@end

