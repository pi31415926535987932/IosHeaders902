/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:08 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <BulletinBoard/BulletinBoard-Structs.h>
@class NSMutableDictionary, NSString;

@interface BBObserverBulletinAttachmentInfo : NSObject {

	NSMutableDictionary* _imageSizePairs;
	char _imagesFetched;
	char _sizesFetched;
	NSString* _imagesRecordID;
	NSString* _sizesRecordID;

}

@property (assign,nonatomic) char imagesFetched;                   //@synthesize imagesFetched=_imagesFetched - In the implementation block
@property (nonatomic,copy) NSString * imagesRecordID;              //@synthesize imagesRecordID=_imagesRecordID - In the implementation block
@property (assign,nonatomic) char sizesFetched;                    //@synthesize sizesFetched=_sizesFetched - In the implementation block
@property (nonatomic,copy) NSString * sizesRecordID;               //@synthesize sizesRecordID=_sizesRecordID - In the implementation block
-(void)dealloc;
-(id)init;
-(CGSize)sizeForKey:(id)arg1 ;
-(void)setSize:(CGSize)arg1 forKey:(id)arg2 ;
-(void)noteImagesFetchedForRecordID:(id)arg1 ;
-(void)noteSizesFetchedForRecordID:(id)arg1 ;
-(char)isImagesFetchedForRecordID:(id)arg1 ;
-(char)isSizesFetchedForRecordID:(id)arg1 ;
-(id)_pairForKey:(id)arg1 create:(char)arg2 ;
-(void)setImagesFetched:(char)arg1 ;
-(void)setImagesRecordID:(NSString *)arg1 ;
-(char)imagesFetched;
-(NSString *)imagesRecordID;
-(void)setSizesFetched:(char)arg1 ;
-(void)setSizesRecordID:(NSString *)arg1 ;
-(char)sizesFetched;
-(NSString *)sizesRecordID;
-(id)imageForKey:(id)arg1 ;
-(void)setImage:(id)arg1 forKey:(id)arg2 ;
@end

