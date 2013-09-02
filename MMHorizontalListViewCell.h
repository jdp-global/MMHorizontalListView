//
//  MMHorizontalListViewCell.h
//  MMHorizontalListView
//
// Version 1.0
//
// Created by Manuele Maggi on 02/08/13.
// email: manuele.maggi@gmail.com
// Copyright (c) 2013-present Manuele Maggi. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#import <UIKit/UIKit.h>

@interface MMHorizontalListViewCell : UIView

@property (nonatomic, strong) NSString *reusableIdentifier;
@property (nonatomic, readonly, assign) NSInteger index;
@property (nonatomic, readonly, assign) BOOL selected;
@property (nonatomic, readonly, assign) BOOL highlighted;
@property (strong, nonatomic) UIColor *backgroundHighlightedColor;
@property (strong, nonatomic) UIColor *foregroundHighlightedColor;
@property (strong, nonatomic) UIColor *buttonBackgroundColor;
@property (strong, nonatomic) UIColor *buttonForegroundColor;

- (void)setSelected:(BOOL)selected animated:(BOOL)animated;
- (void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated;
@end
