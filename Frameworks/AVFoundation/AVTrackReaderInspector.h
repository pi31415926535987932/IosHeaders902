/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:16:02 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetTrackInspector.h>

@class AVWeakReference;

@interface AVTrackReaderInspector : AVAssetTrackInspector {

	OpaqueFigFormatReaderRef _formatReader;
	OpaqueFigTrackReaderRef _trackReader;
	int _trackID;
	unsigned long _mediaType;
	AVWeakReference* _weakReferenceToAsset;

}
-(float)preferredVolume;
-(int)naturalTimeScale;
-(id)availableMetadataFormats;
-(id)metadataForFormat:(id)arg1 ;
-(id)formatDescriptions;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long)arg3 ;
-(OpaqueFigTrackReaderRef)_figTrackReader;
-(long)playabilityValidationResult;
-(char)isSelfContained;
-(long long)totalSampleDataLength;
-(char)requiresFrameReordering;
-(float)estimatedDataRate;
-(id)loudnessInfo;
-(SCD_Struct_CM5)minSampleDuration;
-(id)segmentForTrackTime:(SCD_Struct_CM5)arg1 ;
-(int)alternateGroupID;
-(char)isExcludedFromAutoselectionInTrackGroup;
-(id)_trackReferences;
-(void*)_valueAsCFTypeForProperty:(CFStringRef)arg1 ;
-(unsigned long)_figMediaType;
-(int)trackID;
-(id)mediaCharacteristics;
-(id)extendedLanguageTag;
-(id)mediaType;
-(float)nominalFrameRate;
-(char)isPlayable;
-(int)layer;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(char)isEnabled;
-(id)asset;
-(CGSize)dimensions;
-(id)languageCode;
-(CGSize)naturalSize;
-(SCD_Struct_CM6)timeRange;
-(void)finalize;
-(CGAffineTransform)preferredTransform;
-(id)commonMetadata;
-(id)segments;
@end

