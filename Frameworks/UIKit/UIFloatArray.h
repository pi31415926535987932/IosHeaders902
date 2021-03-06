/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:18 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@interface UIFloatArray : NSObject {

	int _count;
	int _gapCount;
	int* _gaps;
	float _gapValue;
	float _minValue;
	CGSize* _values;
	struct {
		unsigned valueIsSingleton : 1;
		unsigned hideGaps : 1;
		unsigned unused : 30;
	}  _floatArrayFlags;

}
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)_setupValuesWithCount:(int)arg1 singleValue:(float)arg2 isRefresh:(char)arg3 ;
-(char)_setupValuesWithCount:(int)arg1 dataProvider:(id)arg2 isRefresh:(char)arg3 ;
-(char)_setupGapIndexesWithCount:(int)arg1 dataProvider:(id)arg2 isRefresh:(char)arg3 ;
-(char)_setupWithDataProvider:(id)arg1 valueIsSingleton:(char)arg2 singletonValue:(float)arg3 isRefresh:(char)arg4 ;
-(SCD_Struct_UI28)_indexesViaSingletonFromOffset:(float)arg1 toOffset:(float)arg2 ;
-(SCD_Struct_UI28)_indexesViaArrayFromOffset:(float)arg1 toOffset:(float)arg2 ;
-(char)refreshWithDataProvider:(id)arg1 singleValue:(float)arg2 ;
-(char)refreshWithDataProvider:(id)arg1 ;
-(float)singleValue;
-(float)minValue;
-(int)valueCount;
-(float)sum;
-(CGSize)offsetsForIndex:(int)arg1 ;
-(CGSize)offsetsForGapIndex:(int)arg1 ;
-(SCD_Struct_UI28)indexesFromOffset:(float)arg1 toOffset:(float)arg2 ;
-(int)indexForGapIndex:(int)arg1 ;
-(void)hideGaps:(char)arg1 ;
@end

