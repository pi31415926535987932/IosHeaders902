/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:16:00 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <AVFoundation/AVAsynchronousKeyValueLoading.h>

@class AVAssetTrackInternal, AVAsset;

@interface AVAssetTrack : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {

	AVAssetTrackInternal* _track;

}

@property (nonatomic,__weak,readonly) AVAsset * asset; 
@property (nonatomic,readonly) int trackID; 
+(id)mediaCharacteristicsForMediaTypes;
+(id)keyPathsForValuesAffectingTimeRange;
-(float)preferredVolume;
-(int)naturalTimeScale;
-(id)availableMetadataFormats;
-(id)metadataForFormat:(id)arg1 ;
-(id)_weakReference;
-(int)statusOfValueForKey:(id)arg1 ;
-(id)formatDescriptions;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 ;
-(id)_initWithAsset:(id)arg1 trackIndex:(long)arg2 ;
-(char)hasMediaCharacteristics:(id)arg1 ;
-(OpaqueFigAssetTrackRef)_figAssetTrack;
-(void)_startListeningToFigAssetTrackNotifications;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long)arg3 ;
-(void)_stopListeningToFigAssetTrackNotifications;
-(OpaqueFigTrackReaderRef)_figTrackReader;
-(long)playabilityValidationResult;
-(char)isSelfContained;
-(long long)totalSampleDataLength;
-(SCD_Struct_CM6)mediaPresentationTimeRange;
-(SCD_Struct_CM6)mediaDecodeTimeRange;
-(char)requiresFrameReordering;
-(float)estimatedDataRate;
-(id)loudnessInfo;
-(id)segmentForTrackTime:(SCD_Struct_CM5)arg1 ;
-(SCD_Struct_CM5)samplePresentationTimeForTrackTime:(SCD_Struct_CM5)arg1 ;
-(int)alternateGroupID;
-(char)isExcludedFromAutoselectionInTrackGroup;
-(id)associatedTracksOfType:(id)arg1 ;
-(id)_firstAssociatedTrackWithAssociationType:(id)arg1 ;
-(id)_trackReferences;
-(id)_assetTrackInspector;
-(char)_subtitleFormatDescriptionMatchesTextDisplayFlags:(unsigned)arg1 flagsMask:(unsigned)arg2 ;
-(SCD_Struct_CM5)minFrameDuration;
-(id)_fallbackTrack;
-(id)_followingTrackAmongTracks:(id)arg1 ;
-(id)_pairedForcedOnlySubtitlesTrack;
-(id)availableTrackAssociationTypes;
-(char)_hasMultipleEdits;
-(char)_hasScaledEdits;
-(char)_hasEmptyEdits;
-(char)_hasMultipleDistinctFormatDescriptions;
-(char)_firstFormatDescriptionIsLPCM;
-(char)hasMediaCharacteristic:(id)arg1 ;
-(int)trackID;
-(char)hasProtectedContent;
-(id)mediaCharacteristics;
-(id)extendedLanguageTag;
-(id)mediaType;
-(float)nominalFrameRate;
-(int)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(char)isPlayable;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(int)layer;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(char)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)locale;
-(AVAsset *)asset;
-(CGSize)dimensions;
-(id)languageCode;
-(CGSize)naturalSize;
-(SCD_Struct_CM6)timeRange;
-(void)finalize;
-(id)metadata;
-(CGAffineTransform)preferredTransform;
-(id)commonMetadata;
-(id)segments;
@end

