/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:31:45 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPStoreCompletionOfferResponse, MPMediaQuery, MPStoreCollectionCompletionOffering, NSURL, MPStoreOfferMediaItemCollection;

@interface MPStoreCompletionOffering : NSObject <NSCopying> {

	int _preferredStoreOfferVariant;
	MPStoreCompletionOfferResponse* _storeOfferResponse;
	MPMediaQuery* _localItemsQuery;
	MPStoreCollectionCompletionOffering* _collectionWithCompletionItemsOffering;
	int _presentationStyle;
	NSURL* _storeURL;

}

@property (assign,nonatomic) int preferredStoreOfferVariant; 
@property (nonatomic,readonly) int presentationStyle;                                                        //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (nonatomic,copy,readonly) NSURL * storeURL;                                                        //@synthesize storeURL=_storeURL - In the implementation block
@property (nonatomic,readonly) MPStoreOfferMediaItemCollection * collectionWithCompletionItems; 
+(int)defaultOfferVariant;
+(void)setDefaultOfferVariant:(int)arg1 ;
+(id)offeringWithResponse:(id)arg1 localItemsQuery:(id)arg2 ;
-(id)initWithResponse:(id)arg1 localItemsQuery:(id)arg2 ;
-(void)_loadOfferingData;
-(id)copyByInvalidatingCalculatedContent;
-(void)setPreferredStoreOfferVariant:(int)arg1 ;
-(int)preferredStoreOfferVariant;
-(MPStoreOfferMediaItemCollection *)collectionWithCompletionItems;
-(NSURL *)storeURL;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)presentationStyle;
@end

