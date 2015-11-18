/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:31:45 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPNondurableMediaItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSNumber, MPStoreOfferContentRating, MPStoreOfferMediaItemArtworkDescriptor;

@interface MPStoreOfferMediaItem : MPNondurableMediaItem <NSSecureCoding, NSCopying> {

	NSDictionary* _lookupCollectionPropertyValues;
	NSNumber* _itemID;
	int _preferredStoreOfferVariant;
	MPStoreOfferContentRating* _contentRating;
	MPStoreOfferMediaItemArtworkDescriptor* _offerArtworkDescriptor;
	long _offerArtworkDescriptorOnceToken;
	id _pid;
	id _discNumber;
	id _trackNumber;
	id _title;

}
+(char)canFilterByProperty:(id)arg1 ;
+(id)defaultPropertyValues;
+(char)canRequestStoreOfferForLocalMediaItems:(id)arg1 ;
+(char)hasMediaItemValuesForStoreLookupCollectionPropertyValues:(id)arg1 itemID:(id)arg2 ;
+(id)mediaValueForStoreLookupCollectionPropertyValues:(id)arg1 itemID:(id)arg2 mediaProperty:(id)arg3 ;
+(id)contentRatingForCollectionPropertyValues:(id)arg1 itemID:(id)arg2 ;
+(char)canMergeStoreOfferWithLocalMediaItems:(id)arg1 ;
+(id)offerArtworkDescriptorForLookupCollectionPropertyValues:(id)arg1 itemID:(id)arg2 ;
+(id)offerDictionariesForLookupCollectionPropertyValues:(id)arg1 itemID:(id)arg2 ;
+(id)mediaItemsWithStoreLookupCollectionPropertyValues:(id)arg1 preferredStoreOfferVariant:(int)arg2 ;
+(id)mediaItemsByMergingStoreOfferMediaItems:(id)arg1 localItems:(id)arg2 ;
+(id)mediaItemsByRemovingRestrictedContentFromMediaItems:(id)arg1 ;
+(id)preferredAssetDictionaryInOfferDictionary:(id)arg1 ;
+(id)collectionLookupKeyForMediaProperty:(id)arg1 ;
+(id)itemLookupKeyForMediaProperty:(id)arg1 ;
+(id)offerLookupKeyForItemMediaProperty:(id)arg1 ;
+(id)offerDictionaryWithPreferredAssetDictionaryInItemResponseDictionary:(id)arg1 ;
+(id)assetLookupKeyForItemMediaProperty:(id)arg1 ;
+(id)localRepresentativeItemPropertyForMediaProperty:(id)arg1 ;
+(char)supportsSecureCoding;
-(unsigned)albumTrackNumber;
-(unsigned)discNumber;
-(id)mediaLibrary;
-(id)offerArtworkDescriptor;
-(id)screenshotArtworkCatalog;
-(int)preferredStoreOfferVariant;
-(id)initWithLookupLookupCollectionPropertyValues:(id)arg1 preferredStoreOfferVariant:(int)arg2 itemID:(id)arg3 ;
-(id)buyOfferForVariant:(int)arg1 ;
-(char)_offeredItemAlreadyExists;
-(id)_lookupOfferDictionaries;
-(char)isDownloadable;
-(unsigned long long)persistentID;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(char)setValue:(id)arg1 forProperty:(id)arg2 ;
@end
