/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:30:28 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceActivityProvider.h>
#import <libobjc.A.dylib/MKActivityItemSource.h>
#import <libobjc.A.dylib/MKActivityItemSocialSource.h>

@class NSString;

@interface MKPlaceURLActivityProvider : MKPlaceActivityProvider <MKActivityItemSource, MKActivityItemSocialSource>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(CGSize)arg3 ;
-(id)activityViewController:(id)arg1 thumbnailForActivityType:(id)arg2 ;
-(int)activityViewController:(id)arg1 attachmentULRTypeForActivityType:(id)arg2 ;
@end

