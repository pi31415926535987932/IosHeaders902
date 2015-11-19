/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:22 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString, NSNumber;

@interface MLContentRating : NSObject <NSCopying> {

	NSMutableDictionary* _dictionary;

}

@property (nonatomic,copy) NSString * ratingDescription; 
@property (nonatomic,copy) NSString * ratingLabel; 
@property (nonatomic,retain) NSNumber * ratingRank; 
@property (nonatomic,copy) NSString * ratingSystem; 
-(NSString *)ratingDescription;
-(void)setRatingDescription:(NSString *)arg1 ;
-(NSString *)ratingLabel;
-(void)setRatingLabel:(NSString *)arg1 ;
-(NSString *)ratingSystem;
-(void)setRatingSystem:(NSString *)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_setValue:(id)arg1 forKey:(id)arg2 ;
-(id)initWithStringRepresentation:(id)arg1 ;
-(id)copyStringRepresentation;
-(void)_setValueCopy:(id)arg1 forKey:(id)arg2 ;
-(id)initWithContentRatingDictionary:(id)arg1 ;
-(void)setRatingRank:(NSNumber *)arg1 ;
-(NSNumber *)ratingRank;
@end

